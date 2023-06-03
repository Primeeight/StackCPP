#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_Clear, Test1_Int) {
        //Setup
        auto *stack = new Stack<int>();
        int value = 10;
        //Process
        stack->push(value);
        stack->clear();
        //Test
        EXPECT_EQ(0, stack->length());
    }

    TEST(Stack_Clear, Test1_String) {
        //Setup
        auto stack = new Stack<std::string>();
        std::string value = "sun";
        std::string value2 = "moon";
        std::string value3 = "stars";
        std::string value4 = "galaxy";
        //Process
        stack->push(value);
        stack->push(value2);
        stack->push(value3);
        stack->push(value4);
        stack->clear();
        //Test
        EXPECT_EQ(0, stack->length());
    }

    /**
     * Create additional tests
     */
    TEST(Stack_Clear, Test1_Double) {
        //Setup
        auto *stack = new Stack<double>();
        double value = 1.618;
        //Process
        stack->push(value);
        stack->clear();
        //Test
        EXPECT_EQ(0, stack->length());
    }
}

