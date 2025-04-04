# Copyright (c) 2019, Fuzhou Rockchip Electronics Co., Ltd
# Released under the MIT license (see COPYING.MIT for the terms)

require conf/machine/include/rockchip-arm64-common.inc
require conf/machine/include/mali.inc

RK_SOC_FAMILY := "rk3399"

MALI_GPU := "midgard-t86x"
MALI_VERSION := "r18p0"

RK_ISP_VERSION := "1"

MACHINE_EXTRA_RRECOMMENDS:append = " \
	linux-firmware-rockchip-dptx \
"
