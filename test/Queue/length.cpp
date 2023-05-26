
#include "gtest/gtest.h"
#include "../../src/Queue/Queue.cpp"

namespace {

    TEST(Queue_Length, Test3_Int) {
        //Setup
        auto queue = std::make_unique<Queue<int>>();
        //Test
        EXPECT_EQ(0, queue->length());

    }

    TEST(Queue_Length, Test3_String) {
        //Setup
        auto queue = std::make_unique<Queue<std::string>>();
        //Test
        EXPECT_EQ(0, queue->length());

    }

    /**
     * Create additional tests
     */


}