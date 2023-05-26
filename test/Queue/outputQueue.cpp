#include "gtest/gtest.h"
#include "../../src/Queue/Queue.cpp"

namespace {

    TEST(Queue_OutputQueue, Test1_Int) {
        //Setup
        auto queue = std::make_unique<Queue<int>>();;
        //Test
        EXPECT_EQ("", queue->outputQueue());
    }

    TEST(Queue_OutputQueue, Test1_String) {
        //Setup
        auto queue = std::make_unique<Queue<std::string>>();
        //Test
        EXPECT_EQ("", queue->outputQueue());
    }

/**
 * Create additional tests
 */

}