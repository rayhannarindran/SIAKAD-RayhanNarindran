#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__

#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semester;
	int skslulus;
	float ipk;
	std::vector<float> ips;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk);

	void setNRP(std::string nrp);
	std::string getNRP();

	void setTahun(int tahunmasuk);
	int getTahun();

	void setDepartemen(std::string departemen);
	std::string getDepartemen();

	void setSemester(int semester);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif
