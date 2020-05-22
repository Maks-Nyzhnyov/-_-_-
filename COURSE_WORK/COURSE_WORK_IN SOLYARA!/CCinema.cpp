#include "CCinema.h"

#include "CBilliardWithCinema.h"
//#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>

using namespace std;


void CCinema::AdditionalEnter(int choice) {

	while (true) {
		ListFilms();
		if (listFilms.empty()) {
			return;
		}

		if (choice > 0 && choice <= listFilms.size()) {
			auto it = next(listFilms.begin(), choice - 1);
			cout << "Watching film " << it->first << " with duration " << it->second << "(min.)" << " ..." << endl;
			this_thread::sleep_for(chrono::milliseconds(5125));
			cout << "Film ends. Leaving the cinema..." << endl;
			break;
		}
	}
}

void CCinema::ListFilms() {
	if (listFilms.empty()) {
		cerr << "There arent any films!Please add them!" << endl;
		return;
	}
	int count = 1;
	cout << "List of films:" << endl;
	for (auto film : listFilms) {
		cout << count++ << " - " << film.first << "(" << film.second << " min.)" << endl;
	}
}

CCinema::CCinema() : CBilliardWithCinema() {
	ifstream in(filmTxt);
	if (in.is_open()) {
		string parse;
		string film;
		int duration;
		while (getline(in, parse)) {
			auto it = parse.find(";");
			film.append(parse, 0, it);
			duration = stoi(parse.substr(it + 1, parse.size() - it));
			listFilms.push_back(make_pair(film, duration));
		}
	}
	nameCinema = "Billiard with cinema";
}

void CCinema::information()
{
	cout << "Hello,Welcome to the " << nameCinema << endl << " There are list of films in additional entertainmetns!" << endl;
}


void CCinema::SetListCinema(const std::vector<pair<string, int> > listFilms) {
	this->listFilms = listFilms;
}

std::vector<pair<string, int> > CCinema::GetListFilm()const {
	return listFilms;
}

