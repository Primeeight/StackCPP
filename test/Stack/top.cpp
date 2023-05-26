#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_Top, Test1_Int) {
        auto stack = new Stack<int>();
        int value = 55;
        int value2 = 45;
        //Process
        stack->push(value);
        stack->push(value2);
        //Test
        EXPECT_EQ(45, stack->top());
    }

    TEST(Stack_Top, Test1_String) {
        //Setup
        auto stack = new Stack<std::string>();
        std::string value = "red";
        std::string value2 = "orange";
        //Process
        stack->push(value);
        stack->push(value2);
        stack->push(value);
        //Test
        EXPECT_EQ("red", stack->top());
    }

    /**
     * Create additional tests
     */



}
