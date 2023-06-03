#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_Push, Test1_Int) {
        //Setup
        auto stack = new Stack<int>();
        int value = 37;
        //Process
        stack->push(value);
        //Test
        EXPECT_EQ(37, stack->top());
    }

    TEST(Stack_Push, Test1_String) {
        //Setup
        auto stack = new Stack<std::string>();
        std::string value = "purple";
        std::string value2 = "green";
        //Process
        stack->push(value);
        stack->push(value2);
        stack->push(value);
        //Test
        EXPECT_EQ("purple", stack->top());
    }
    TEST(Stack_Push, Test1_Double) {
        //Setup
        auto stack = new Stack<double>();
        double value = 1.618;
        //Process
        stack->push(value);
        value = 033;
        stack->push(value);
        value = 988;
        stack->push(value);
        //Test
        EXPECT_EQ(988, stack->top());
    }

}
