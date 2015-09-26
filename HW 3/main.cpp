#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
	string data_file = "data.txt";
	string line;
	ifstream data(data_file.c_str());

	map<int, pair<double,int>> avgTemp;
	map<int, pair<double,double>> Coord;
	map<int, string> names;
	
	//Read data into maps
	if (data.is_open()) {
		int id, day;
		double lat, lng, temp;
		string date, state;
		while (data >> id) {
			data >> lat >> lng >> date >> temp >> state >> day;
			//Average Values
			if (avgTemp.count(id) > 0) {
				avgTemp[id].first = (avgTemp[id].first + temp) / 2;
				avgTemp[id].second++;
			}
			//Add New Entry
			else {
				avgTemp[id].first = temp;
				avgTemp[id].second = 1;
				Coord[id].first = lat;
				Coord[id].second = lng;
				names[id] = state;
			}
		}
	}
	data.close();

	for (auto const & key:avgTemp) {
		cout << key.first << " " << names[key.first] << " " << key.second.first << endl;
	}


	system("Pause");
	return 0;
}