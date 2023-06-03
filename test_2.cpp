#include <glog/logging.h>

int main(int argc, char* argv[]) {
    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);

    int a = 1, b = 2;
    int *p;

    CHECK(a == 0) << "a should not be 0";
    CHECK_EQ(a, b) << "a should be equal to b";
    int* notnullptr = CHECK_NOTNULL(p);
}