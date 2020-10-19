# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/iohs/ioo/topfiles.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019,2020
# [+] International Business Machines Corp.
#
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#
# IBM_PROLOG_END_TAG
TOP-C-SOURCES = io_lib.c pk_app_irq_table.c io_irq_handlers.c io_logger.c
TOP-C-SOURCES += ioo_main.c
TOP-C-SOURCES += ioo_thread.c
TOP-C-SOURCES += supervisor_thread.c
TOP-C-SOURCES += io_init_and_reset.c
TOP-C-SOURCES += io_tx_zcal.c
TOP-C-SOURCES += tx_dcc_main.c
TOP-C-SOURCES += txbist_main.c
TOP-C-SOURCES += eo_common.c
TOP-C-SOURCES += eo_main.c
TOP-C-SOURCES += eo_ddc.c
TOP-C-SOURCES += eo_ctle.c
TOP-C-SOURCES += eo_lte.c
TOP-C-SOURCES += eo_dfe.c
TOP-C-SOURCES += eo_vga.c
TOP-C-SOURCES += eo_loff.c
TOP-C-SOURCES += eo_eoff.c
TOP-C-SOURCES += eo_qpa.c
TOP-C-SOURCES += eo_bank_sync.c
TOP-C-SOURCES += eo_vclq_checks.c
TOP-C-SOURCES += tx_zcal_tdr.c
TOP-C-SOURCES += tx_ffe.c
TOP-C-SOURCES += eo_bist_init_ovride.c
TOP-C-SOURCES += eo_rxbist_ber.c
TOP-C-SOURCES += eo_llbist.c
TOP-C-SOURCES += tx_seg_test.c
TOP-C-SOURCES += io_manual_amp_servo.c
TOP-C-SOURCES += tx_zcal_bist.c
TOP-C-SOURCES += eo_dac_test.c
TOP-CXX-SOURCES =
TOP-S-SOURCES =

TOP_OBJECTS = $(TOP-C-SOURCES:.c=.o) $(TOP-S-SOURCES:.S=.o) $(TOP-CXX-SOURCES:.C=.o)
