#include "gtest/gtest.h"
#include "../../src/Stack/Stack.cpp"

namespace {

    TEST(Stack_OutputStack, Test1_Int) {
        //Setup
        auto stack = new Stack<int>();
        int value = 37;
        int value2 = 7;
        int value3 = 3;
        int value4 = 10;
        //Process
        stack->push(value);
        stack->push(value2);
        stack->push(value3);
        stack->push(value4);
        //Test
        EXPECT_EQ("10, 3, 7, 37", stack->outputStack());
    }

    TEST(Stack_OutputStack, Test1_String) {
        //Setup
        auto stack = new Stack<std::string>();
        std::string value = "fish";
        std::string value2 = "sun";
        std::string value3 = "cat";
        std::string value4 = "dog";
        //Process
        stack->push(value);
        stack->push(value2);
        stack->push(value3);
        stack->push(value4);
        //Test
        EXPECT_EQ("dog, cat, sun, fish", stack->outputStack());
    }

/**
 * Create additional tests
 */


}
