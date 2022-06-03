sc_bv<W>
sc_lv<W>

sc_bv<BITWIDTH> NAME...

sc_bv<5> positions= "01101";
sc_bv<6> mask = "100111";
sc_bv<5> active = positions & mask;//00101
sc_bv<1> all= active.and_reduce();
positions.range(3,2) = "00";
positions[2]= active[0]^flag;

sc_logic NAME[,NAME]...
sc_lv<BITWIDTH> NAME[,NAME]...

sc_lv<5> positions= "01xz1";
sc_lv<6> mask = "10ZX11";
sc_lv<5> active = positions & mask;
sc_lv<1> all = active.and_reduce();
positions.range(3,2)= "00";
positions[2]=active[0]^flag;

//sc_int<W> and sc_uint<W>
sc_int<LENGTH> NAME...;
sc_uint<LENGTH> NAME...;

sc_bigint<BITWIDTH> NAME...;
sc_biguint<BITWIDTH> NAME...;

sc_int<5> seat_position=3;// There are 5 bits...4 plus sign
sc_uint<13> days_SLOC(4000);
sc_biguint<80> revs_SLOC;

//to enable fixed-point data types
#define SC_INCLUDE_FX
#include<systemc>
//fixed-point data types are enabled with this pragma
sc_fixed<5,3> compass;

const sc_ufixed<19,3> PI("3.141592654");
sc_fix oil_temp(20, 17, SC_RND_INF, SC_SAT);
sc_fixed_fast<7,1> valve_opening;


