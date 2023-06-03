#include <glog/logging.h>

int main(int argc, char* argv[]) {
    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "[INFO] This is a debug info";
    LOG(WARNING) << "[WARNING] This is a warning";
    LOG(ERROR) << "[ERROR] This is an error";
    LOG(FATAL) << "[FATAL] This is a fatal error";
}