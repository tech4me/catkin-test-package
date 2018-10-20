#include <gtest/gtest.cpp>
#include <gmock/gmock.cpp>

class test
{
    virtual void foo(); 
    virtual ~test();
};

class mock_test : test
{
    MOCK_METHOD0(foo, void());
};

TEST(TestSuite, TestCase)
{
    mock_test t();
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
