#include "HSSHighscore.h"

namespace HS {


	void initList() {
		for (int i = 0; i < listSize; i++) {
			list[i].name = "---";
			list[i].score = 0;
		}
	}

	void insertSort(ScoreEntry entry) {
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++) {
				if (entry.score > list[j].score)
				{
					ScoreEntry temp = entry;
					entry = list[j];
					list[j] = temp;

				}

			}
		}
	}

	void forceInsert(ScoreEntry entry, int pos) {
		list[pos] = entry;
	}

	void deleteEntry(int pos) {
		list[pos].name = "---";
		list[pos].score = 0;

		ScoreEntry temp;
		for (int i = listSize - 1; i >= 0; i--) {
			if (list[i].score == 0) {
				temp = list[i];
				list[i] = list[i - 1];
				list[i - 1] = temp;
			}
		}
	}

	void clearAllEntries() {
		for (int i = 0; i < listSize; i++) {
			list[i].name = "---";
			list[i].score = 0;
		}
	}

	ScoreEntry returnRankEntry(int pos) {
		return list[pos];
	}
	std::string returnRankName(int pos) {
		return list[pos].name;
	}
	long int returnRankScore(int pos) {
		return list[pos].score;
	}
}