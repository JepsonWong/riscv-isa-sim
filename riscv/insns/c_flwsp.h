require_extension('C');
if (xlen == 32) {
  require_extension('F');
  require_fp;
  WRITE_FRD(MMU.load_int32(RVC_SP.data + insn.rvc_lwsp_imm()));
} else { // c.ldsp
  require(insn.rvc_rd() != 0);
  WRITE_RD(MMU.load_int64(RVC_SP.data + insn.rvc_ldsp_imm()));
}
