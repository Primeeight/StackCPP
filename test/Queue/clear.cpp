
#include "gtest/gtest.h"
#include "../../src/Queue/Queue.cpp"

namespace {

    TEST(Queue_Clear, Test1_Int) {
        //Setup
        auto queue = std::make_unique<Queue<int>>();
        int value = 88;
        //Process
        queue->enqueue(value);
        queue->clear();
        //Test
        EXPECT_EQ(0, queue->length());
    }

    TEST(Queue_Clear, Test1_String) {
        //Setup
        auto queue = std::make_unique<Queue<std::string>>();
        std::string value = "sun";
        //Process
        queue->enqueue(value);
        queue->clear();
        //Test
        EXPECT_EQ(0, queue->length());
    }

    /**
     * Create additional tests
     */

}

