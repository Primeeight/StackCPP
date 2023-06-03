#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_Pop, Test1_Int) {
        //Setup
        auto stack = new Stack<int>();
        int value = 37;
        //Process
        stack->push(value);
        stack->pop(value);
        //Test
        EXPECT_EQ(std::nullopt, stack->top());
    }

    TEST(Stack_Pop, Test1_String) {
        //Setup
        auto stack = new Stack<std::string>();
        std::string value = "purple";
        std::string value2 = "green";
        //Process
        stack->push(value);
        stack->push(value2);
        stack->push(value);
        stack->pop(value);
        //Test
        EXPECT_EQ("green", stack->top());
    }

    /**
     * Create additional tests
     */

    TEST(Stack_Pop, Test3_Double) {
        //Setup
        auto stack = new Stack<double>();
        double value = 3.14;
        //Process
        stack->push(value);
        stack->pop(value);
        //Test
        EXPECT_EQ(std::nullopt, stack->top());
    }
}
