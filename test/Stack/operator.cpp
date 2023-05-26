#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_Operator, Test1_Int) {
        auto stack = new Stack<int>();
        auto stack2 = new Stack<int>();
        int value = 33;
        int value2 = 23;
        //Process
        stack->push(value);
        stack->push(value2);
        stack2->push(value);
        stack = std::move(stack2);
        //Test
        EXPECT_EQ("33", stack->outputStack());
    }

    TEST(Stack_Operator, Test1_String) {
        auto stack = new Stack<std::string>();
        auto stack2 = new Stack<std::string>();
        std::string value = "fish";
        std::string value2 = "cat";
        //Process
        stack->push(value);
        stack->push(value2);
        stack = std::move(stack2);
        //Test
        EXPECT_EQ(0, stack->length());
    }

}
