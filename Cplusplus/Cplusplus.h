#pragma once
#include <iostream>

#include <string>
#include <vector>
#include <algorithm>
#include <execution>
class Player;

struct Data {
	int price;
	int id;
	int value;
	std::string input;
};

class Cplusplus
{
private:
	
public:
	std::vector<Data*> vctVirtual, vctVirtual1;

	void sort() {
		std::sort(std::execution::par,vctVirtual.begin(), vctVirtual.end(), [](Data* data1,Data* data2) {
			return data1->price > data2->price;	
			});
		std::cout << std::is_sorted(vctVirtual.begin(), vctVirtual.end(), [](Data* data1, Data* data2) {return data1->price > data2->price; });

	}
	/*void copyData() {
		std::copy_if(vctVirtual.begin(), vctVirtual.end(),std::back_inserter(vctVirtual1), [](Data* data) {return data->price > 10; });
		int x = 0;
	}*/
};





class Player {
public:
	int x = 0;
};

