#ifndef ROWNIA_H
#define ROWNIA_H

class rownia{

private:

  double dlugosc;
  double kat;

  double calculate_a();

public:

  rownia():dlugosc(0.0),kat(0.0){init()};
  rownia(double _dlugosc, double _kat)
  :dlugosc(_dlugosc),kat(_kat){init()};

  ~rownia(){};

  void init();

  void set_dlugosc(double _dlugosc);
  void set_kat(double _kat);

  double get_dlugosc();
  double get_kat();

  double calculate_v();
  double calculate_t();
  double calculate_k(double v);


};


#endif // ROWNIA_H
