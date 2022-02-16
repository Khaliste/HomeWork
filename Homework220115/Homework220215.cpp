#include <iostream>
#include <assert.h>
#include <crtdbg.h>

using DataType = int;

class GameArray
{
private:
    int Size_;
    DataType* ArrData_;

public:
    int GetSize()
    {
        return Size_;
    }

    DataType& operator[](int _Index)
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

    inline void operator=(const GameArray& _Other)
    {
        ReSize(_Other.Size_);
        //¾èÀº º¹»ç

        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = _Other.ArrData_[i];
        }

        return;
    }

    inline void AllValueSetting(const DataType& Data)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = Data;
        }
    }

    inline void Release()
    {
        if (nullptr != ArrData_)
        {
            delete[] ArrData_;
            ArrData_ = nullptr;
        }
    }

    void ReSize(unsigned int _Size)
    {
        int BeforeSize = Size_;
        int AfterSize = _Size;
        GameArray CopyArray = GameArray();
        CopyArray.ArrData_ = new DataType[Size_];
        if (nullptr != ArrData_)
        {
            for (int i = 0; i < BeforeSize; i++)
            {
                CopyArray.ArrData_[i] = this->ArrData_[i];
            }
        }
        Release();
        ArrData_ = new DataType[AfterSize];
        Size_ = _Size;
        if (BeforeSize > AfterSize)
        {
            for (int i = 0; i < AfterSize; i++)
            {
                ArrData_[i] = CopyArray.ArrData_[i];
            }
        }
        if (BeforeSize < AfterSize)
        {
            for (int i = 0; i < BeforeSize; i++)
            {
                ArrData_[i] = CopyArray.ArrData_[i];
            }
        }
    }

public:
    GameArray(unsigned int _Size)
        : ArrData_(nullptr)
        , Size_(0)
    {
        ReSize(_Size);
    }

    GameArray()
        :ArrData_(nullptr)
        , Size_(0)
    {
    }

    ~GameArray()
    {
        Release();
    }
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    GameArray NewArray = GameArray(10);
    GameArray NewArray2 = GameArray(10);

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        NewArray[i] = i;
    }

    NewArray2 = NewArray;

    NewArray.AllValueSetting(0);

    NewArray2.ReSize(5);

    for (int i = 0; i < NewArray2.GetSize(); i++)
    {
        std::cout << NewArray2[i] << std::endl;
    }

}