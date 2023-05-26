#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_ReplaceTop, Test1) {
        auto stack = new Stack<int>();
        int value = 55;
        int value2 = 45;
        int value3 = 28;
        //Process
        stack->push(value);
        stack->push(value2);
        stack->replaceTop(value3);
        //Test
        EXPECT_EQ(28, stack->top());

    }

    TEST(Stack_ReplaceTop, Test1_String) {
        //Setup
        auto stack = new Stack<std::string>();
        std::string value = "red";
        std::string value2 = "orange";
        //Process
        stack->push(value);
        stack->replaceTop(value2);
        //Test
        EXPECT_EQ("orange", stack->top());
    }

    /**
     * Create additional tests
     */


}
