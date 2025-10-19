#include "pch.h"
#include "CppUnitTest.h"


extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);
extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace recTest
{
    TEST_CLASS(RectangleTests)
    {
    public:

        
        TEST_METHOD(Perimeter_Valid)
        {
            int L = 5, W = 10;
            Assert::AreEqual(30, getPerimeter(&L, &W));
        }

        
        TEST_METHOD(Area_Valid)
        {
            int L = 5, W = 10;
            Assert::AreEqual(50, getArea(&L, &W));
        }

        
        TEST_METHOD(Length_Valid)
        {
            int len = 10;
            setLength(45, &len);
            Assert::AreEqual(45, len);
        }

        TEST_METHOD(Length_Lower)
        {
            int len = 10;
            setLength(1, &len);
            Assert::AreEqual(1, len);
        }

        TEST_METHOD(Length_Upper)
        {
            int len = 10;
            setLength(99, &len);
            Assert::AreEqual(99, len);
        }

        TEST_METHOD(Length_Negative)
        {
            int len = 10;
            setLength(-5, &len);
            Assert::AreEqual(10, len);
        }

        
        TEST_METHOD(Width_Valid)
        {
            int w = 20;
            setWidth(60, &w);
            Assert::AreEqual(60, w);
        }

        TEST_METHOD(Width_Lower)
        {
            int w = 20;
            setWidth(1, &w);
            Assert::AreEqual(1, w);
        }

        TEST_METHOD(Width_Upper)
        {
            int w = 20;
            setWidth(99, &w);
            Assert::AreEqual(99, w);
        }

        TEST_METHOD(Width_Negative)
        {
            int w = 20;
            setWidth(-10, &w);
            Assert::AreEqual(20, w);
        }
    };
}
