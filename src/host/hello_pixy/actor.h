class Actor
{
	public:
		int x, y, w, h, area;
		int id, index;
		float aspectratio;
		void set_x(int new_x);
		void set_y(int new_y);
		void set_w(int new_w);
		void set_h(int new_h);
		void set_id(int new_id);
		void set_index(int new_index);
		int get_index();
		int get_x();
		int get_y();
		int get_w();
		int get_h();
		int get_id();
		int get_area();
		float get_aspectratio();
		void print_x() const;
		void print_y() const;
		void print_w() const;
		void print_h() const;
		void print_id() const;
		void print_aspectratio() const;
};

