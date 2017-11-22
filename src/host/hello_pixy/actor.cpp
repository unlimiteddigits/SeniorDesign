#include "actor.h"

/*
		int x, y, w, h, area;
		int id, index;
		float aspectratio;

		n/a int pixel_width;
		float angle_from_center;
		float physical_distance_H, physical_distance_W, computed_distance, physical_aspectratio, focal_length, physical_width, physical_height;
*/

void Actor::set_x(int new_x) {
	x=new_x;
};
void Actor::set_y(int new_y) {
	y=new_y;
};
void Actor::set_h(int new_h) {
	h=new_h;
	area=h*w;
	if (h!=0) {
		aspectratio=(w / float(h));
	};
};
void Actor::set_w(int new_w) {
	w=new_w;
	area=h*w;
	if (h!=0) {
		aspectratio=(w / float(h));
	};
};
void Actor::set_id(int new_id) {
	id=new_id;
};
void Actor::set_index(int new_index) {
	index=new_index;
};

float Actor::get_aspectratio() {
	return aspectratio;
};

int Actor::get_index() {
	return index;
};

int Actor::get_id() {
	return id;
};

int Actor::get_x() {
	return x;
};

int Actor::get_y() {
	return y;
};

int Actor::get_w() {
	return w;
};

int Actor::get_h() {
	return h;
};

void Actor::print_x() const {
		printf("%i ", x);
};
void Actor::print_y() const {
		printf("%i ", y);
};
void Actor::print_id() const {
		printf("%i ",id);
};
void Actor::print_w() const {
		printf("%i ", w);
};
void Actor::print_h() const {
		printf("h=%i ", h);
};
void Actor::print_aspectratio() const {
		printf("Aspect Ratio=%f ", aspectratio);
};

