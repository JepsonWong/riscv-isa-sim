require_extension('A');
require_rv64;
p->get_state()->load_reservation = RS1.data;
WRITE_RD(MMU.load_int64(RS1.data));
