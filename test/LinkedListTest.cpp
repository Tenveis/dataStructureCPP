#include "gtest/gtest.h"
#include "LinkedList/LinkedList.h"

TEST(LinkedListTest, ConstructorTest)
{
    LinkedList list;
    EXPECT_EQ(list.getLength(), 0);
}

TEST(LinkedListTest, AppendTest)
{
    LinkedList list;
    list.append(42);
    EXPECT_EQ(list.getLength(), 1);
    EXPECT_EQ(list.getTail(), 42);
}

TEST(LinkedListTest, DeleteLastTest)
{
    LinkedList list;
    list.append(42);
    list.append(23);
    int deletedValue = list.deleteLast();
    EXPECT_EQ(deletedValue, 23);
    EXPECT_EQ(list.getLength(), 1);
}

TEST(LinkedListTest, PrependTest)
{
    LinkedList list;
    list.prepend(42);
    list.prepend(23);
    EXPECT_EQ(list.getHead(), 23);
}

TEST(LinkedListTest, DeleteFirstTest)
{
    LinkedList list;
    list.append(42);
    list.append(23);
    int deletedValue = list.deleteFirst();
    EXPECT_EQ(deletedValue, 42);
    EXPECT_EQ(list.getLength(), 1);
}

TEST(LinkedListTest, SetTest)
{
    LinkedList list;
    list.append(42);
    list.append(23);
    bool result = list.set(1, 50);
    EXPECT_TRUE(result);
    EXPECT_EQ(list.get(1)->value, 50);
}

TEST(LinkedListTest, InsertTest)
{
    LinkedList list;
    list.append(42);
    list.append(23);
    bool result = list.insert(1, 50);
    EXPECT_TRUE(result);
    EXPECT_EQ(list.get(1)->value, 50);
    EXPECT_EQ(list.getLength(), 3);
}

TEST(LinkedListTest, DeleteNodeTest)
{
    LinkedList list;
    list.append(42);
    list.append(23);
    int deletedValue = list.deleteNode(1);
    EXPECT_EQ(deletedValue, 23);
    EXPECT_EQ(list.getLength(), 1);
}

TEST(LinkedListTest, ClearTest)
{
    LinkedList list;
    list.append(42);
    list.append(23);
    list.clear();
    EXPECT_EQ(list.getLength(), 0);
    EXPECT_EQ(list.getHead(), INT_MIN); 
}

TEST(LinkedListTest, ReverseTest)
{
    LinkedList list;
    for(int i=0;i<100;i++)
    {
        list.append(i);
    }
    list.reverse();
    EXPECT_EQ(list.getHead(), 99);
    EXPECT_EQ(list.getTail(), 0);
}


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
