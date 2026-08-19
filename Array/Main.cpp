#include <iostream>
#include <cstdint>
#include <algorithm>
#include <cassert>

template<typename T, size_t size>
class Array
{
public:

	// const 붙은 거 안 붙은 거 2개를 구현해주는 게 일반적 (왜?)
	T& operator[](size_t index)
	{
		assert(index < size && "oversize");
		return data[index];
	}
	const T& operator[](size_t index) const
	{
		return data[index];
	}
	
	T* begin()
	{
		//배열의 시작주소반환
		return data;
	}

	T* end()
	{
		//배열 마지막 인덱스의 다음 위치
		return data + size;
	}

	T* Data() { return data; }
	const T* Data() const { return data; } 
	size_t Length() const { return size; }
	
private:
	T data[size]{};
};







int main()
{
	Array<int, 10> intArray;
	std::fill(
		//intArray.Data(),
		//intArray.Data() + intArray.Length(),
		intArray.begin(),
		intArray.end(),
		20
	);
	
	for (const auto& value : intArray)
	{
		std::cout << value << " ";
	}




	std::cin.get();
	//intArray[0] = 10;
	//int intNumber = intArray[0];
	//const int& constNumber = intArray[0];
	//정적 배열.
	//const uint32_t size = 5; //const안쓰면 인덱스로 활용 불가능 -> 변수의 크기를 확정짓지 못하기 때문에.
	//int array[size] = {};
	//array[0] = 10;
	//array[1] = 20;
	//array[2] = 30;

	//int number = array[0];

	//uint32_t dSize = 10;
	//int* dArray = new int[dSize] {};


	//for (int a : intArray)
	//{
	//	std::cout << a << ' ';
	//}

	//delete[] array;
}