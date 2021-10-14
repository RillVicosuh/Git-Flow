#ib-02---git-flow-rvill095-and-amill101nclude "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld){
  char* test_val[3]; test_val[0] = "./c-echo";
        test_val[1] = "hello"; test_val[2] = "world";
  EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString){
  char* test_val[1]; test_val[0] = "./c.echo";
  EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, ReadNumbersProperly){
  char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "1"; 
        test_val[2] = "7";
  EXPECT_EQ("1 7", echo(3, test_val));
}

TEST(EchoTest, SubstringIncludedInString){
  char* test_val[3]; test_val[0] = "./c.echo"; test_val[1] = "Pepperoni"; test_val[2] = "Pizza";
  char* str = "Pizza";
  EXPECT_TRUE((echo(3,test_val)).find(str) != std::string::npos);
}

TEST(EchoTest, LessThanMaxCharacters){
 char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "asdjficnv"; 
       test_val[2] = "cniocbixe";
 const int MAX = 20;
 EXPECT_TRUE(MAX > (echo(3, test_val)).length());
}

TEST(EchoTest, StringLengthsNearlyEquivalent){
  char* test_val1[3]; test_val1[0] = "./c-echo"; test_val1[1] = "CS"; 
        test_val1[2] = "100";
  char* test_val2[3]; test_val2[0] = "./c-echo"; test_val2[1] = "CS"; 
        test_val2[2] = "10";
  ASSERT_NEAR((echo(3, test_val1)).length(), (echo(3, test_val2)).length(), 1);
}

int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
