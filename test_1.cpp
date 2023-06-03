#include <glog/logging.h>

int main(int argc, char* argv[]) {
    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);
    for(int i = 0; i< 20; i++) {
        LOG_FIRST_N(INFO, 5) << "[INFO] In the " << i << "th round";
        LOG_IF(INFO, i > 18) << "[INFO] ith round :" << i;
        LOG_EVERY_N(INFO, 6) << "[INFO] In the " << i << "th round !!!";
        LOG_IF_EVERY_N(INFO, (i > 18), 6) << "[INFO] IN THE " << i
                                        << "th ROUND !!!";
    }
}