
#ifndef CCinema_hpp
#define CCinema_hpp

//#include "stdafx.h"
#include "CBilliardBase.h"
#include <vector>
#include <string>
#include "CBilliardWithCinema.h"
#include "CBilliardTable.h"

class CCinema : public CBilliardWithCinema {
private:
	
public:
	
	
	std::vector< std::pair<std::string, int> > listFilms;
	std::string filmTxt = "films.txt";
	void AdditionalEnter(int choice)override;
	CCinema();
	

	
	void information()override;
	void ListFilms();

	void SetListCinema(const std::vector<std::pair<std::string, int> > listFilm);

	std::vector<std::pair<std::string, int>> GetListFilm()const;

};


#endif 
