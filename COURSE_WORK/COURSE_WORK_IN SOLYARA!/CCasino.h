#pragma once
#include "CBilliardWithCasino.h"
#include "CBilliardTable.h"

#ifndef CCasinoh
#define CCasinoh


	class CCasino : public CBilliardWithCasino {
	private:
		
	public:
		std::vector<std::string> listCasinos;
		std::string casinoTxt = "casinolist.txt";
		void AdditionalEnter(int choice)override;
		CCasino();

		

		void Start()override;

		void ListCasinos();
		void information()override;
		void SetListCasinos(const std::vector<std::string> listCasinos);

		std::vector<std::string> GetListCasinos()const;

};

#endif /* CBilliardWithCasino_hpp */


