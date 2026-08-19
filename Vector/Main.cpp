#include "List.h"
#include <iostream>
#include <string>

int main()
{
	List<std::string> characterList;
	characterList.push_back("Warrior");
	characterList.push_back("Knight");
	characterList.push_back("Archer");
	characterList.push_back("Archer");
	characterList.push_back("Archer");
	characterList.push_back("Archer");
	characterList.push_back("Archer");
	characterList.push_back("Archer");

	// 범위 기반 루프로 출력
	for (const auto& value : characterList)
	{
		std::cout << value << " ";
	}
}