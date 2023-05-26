
#include "gtest/gtest.h"
#include "../../src/Queue/Queue.cpp"

namespace {

    TEST(Queue_Front, Test1_Int) {
        //Setup
        auto queue = std::make_unique<Queue<int>>();
        //Test
        EXPECT_EQ(std::nullopt, queue->front());
    }


    TEST(Queue_Front, Test1_String) {
        //Setup
        auto queue = std::make_unique<Queue<std::string>>();
        //Test
        EXPECT_EQ(std::nullopt, queue->front());
    }

    /**
     * Create additional tests
     */

}