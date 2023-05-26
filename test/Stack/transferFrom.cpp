#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_TranferFrom, Test1_Int) {
        auto stack = new Stack<int>();
        auto stack2 = new Stack<int>();
        int value = 55;
        int value2 = 45;
        //Process
        stack->push(value);
        stack->push(value2);
        stack2->transferFrom(*stack);
        //Test
        EXPECT_EQ("45, 55", stack2->outputStack());

    }

    TEST(Stack_TranferFrom, Test2_Int) {
        auto stack = new Stack<int>();
        auto stack2 = new Stack<int>();
        int value = 5;
        int value2 = 4;
        int value3 = 6;
        //Process
        stack->push(value);
        stack->push(value2);
        stack->push(value3);
        stack2->transferFrom(*stack);
        //Test
        EXPECT_EQ("6, 4, 5", stack2->outputStack());

    }

}
