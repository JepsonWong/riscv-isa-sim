WRITE_RD(reg_t(sext_xlen(zext_xlen(RS1.data) >> (RS2.data & (xlen-1)))));
