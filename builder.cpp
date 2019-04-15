#include <iostrem>
#include <string>
using namespace std;

class height {
	public:
		int h;
}

class weight {
	public:
		int w;
}

class blood {
	public:
		int b;
}

class human {
	public:
		height *h;
		weight *w;
		blood *b;
		void introduce() {
			cout << "Height " << h->h << endl;
			cout << "Weight " << w->w << endl;
			cout << "Blood " << b->b << endl;

		}
}

class Builder {
	public:
		virtual height* getHeight() = 0;
		virtual weight* getWeight() = 0;
		virtual blood* getBlood() = 0;
};

class HandsomeBuilder : public Builder {
	public:
		height* getHeight() {
			height* h = new height();
			h->h = 186;
			return h;
		}

		weight* getWeight() {
			weight* w = new weight();
			w->w = 80;
			return w;
		}

		blood* getBlood() {
			blood* b = new blood();
			b->b = 1;
			return b;

		}

}

void Director {
	Builder *builder;
	public:
		void setBuilder(Builder* newBuilder) {
			builder = newBuilder;
		}

		human *born() {
			human *man = new human();

			man->h = builder->getHeight();
			man->w = builder->getWeight();
			man->b = builder->getBlood();

		}
}


}
