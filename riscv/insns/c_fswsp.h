require_extension('C');
if (xlen == 32) {
  require_extension('F');
  require_fp;
  MMU.store_uint32(RVC_SP.data + insn.rvc_swsp_imm(), RVC_FRS2);
} else { // c.sdsp
  MMU.store_uint64(RVC_SP.data + insn.rvc_sdsp_imm(), RVC_RS2);
}
