/*************************************************************************
      Hunter Stout   -   3/18/2022
      tarray.h       -   Lab 8 Header File.
*************************************************************************/

#include<iostream>

template<class T>
	class Tarray{
	public:
		//Constructor
		Tarray();

		//Big 3
		~Tarray();
		Tarray(const T& other);
		void operator = (const T& other);

		//Itterator Functions
		void start() {current_index = 0;}
		bool is_item()const {return current_index < used;}
		void advance() {current_index++;}
		T current()const {return data[current_index];}

		//Add & Remove.
		void add(T item);
		void remove_current();

	private:
		void resize();
		T* data;
		std::size_t capacity;
		std::size_t used;
		std::size_t current_index;
};
#include "tarray.template"