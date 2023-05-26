
#include "gtest/gtest.h"
#include "../../src/Queue/Queue.cpp"

namespace {

    TEST(Queue_Dequeue, Test1_Int) {
        //Setup
        auto queue =  std::make_unique<Queue<int>>();
        int value = 37;
        int value2 = 45;
        //Process
        queue->enqueue(value);
        queue->enqueue(value2);
        queue->dequeue(value);
        //Test
        EXPECT_EQ(45, queue->front());
    }

    TEST(Queue_Dequeue, Test1_String) {
        //Setup
        auto queue = std::make_unique<Queue<std::string>>();
        std::string value = "sun";
        std::string value2 = "moon";
        std::string value3 = "stars";
        std::string value4 = "galaxy";
        //Process
        queue->enqueue(value);
        queue->enqueue(value2);
        queue->enqueue(value3);
        queue->enqueue(value4);
        queue->dequeue(value);
        //Test
        EXPECT_EQ("moon", queue->front());
    }

    /**
     * Create additional tests
     */

}