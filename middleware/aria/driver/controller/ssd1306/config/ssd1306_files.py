# coding: utf-8
##############################################################################
# Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
#
# Subject to your compliance with these terms, you may use Microchip software
# and any derivatives exclusively with Microchip products. It is your
# responsibility to comply with third party license terms applicable to your
# use of third party software (including open source software) that may
# accompany Microchip software.
#
# THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
# EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
# WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
# PARTICULAR PURPOSE.
#
# IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
# INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
# WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
# BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
# FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
# ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
# THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
##############################################################################

# generate code files
projectPath = "config/" + Variables.get("__CONFIGURATION_NAME") + "/gfx/driver/ssd1306"

GFX_SSD1306_C = comp.createFileSymbol("GFX_SSD1306_C", None)
GFX_SSD1306_C.setDestPath("gfx/driver/controller/ssd1306/")
GFX_SSD1306_C.setSourcePath("templates/drv_gfx_ssd1306.c")
GFX_SSD1306_C.setOutputName("drv_gfx_ssd1306.c")
GFX_SSD1306_C.setProjectPath(projectPath)
GFX_SSD1306_C.setType("SOURCE")
GFX_SSD1306_C.setMarkup(True)

GFX_SSD1306_H = comp.createFileSymbol("GFX_SSD1306_H", None)
GFX_SSD1306_H.setDestPath("gfx/driver/controller/ssd1306/")
GFX_SSD1306_H.setSourcePath("templates/drv_gfx_ssd1306.h")
GFX_SSD1306_H.setOutputName("drv_gfx_ssd1306.h")
GFX_SSD1306_H.setProjectPath(projectPath)
GFX_SSD1306_H.setType("HEADER")
GFX_SSD1306_H.setMarkup(True)

GFX_SSD1306_CMD_DEFS_H = comp.createFileSymbol("GFX_SSD1306_CMD_DEFS_H", None)
GFX_SSD1306_CMD_DEFS_H.setDestPath("gfx/driver/controller/ssd1306/")
GFX_SSD1306_CMD_DEFS_H.setSourcePath("inc/drv_gfx_ssd1306_cmd_defs.h")
GFX_SSD1306_CMD_DEFS_H.setOutputName("drv_gfx_ssd1306_cmd_defs.h")
GFX_SSD1306_CMD_DEFS_H.setProjectPath(projectPath)
GFX_SSD1306_CMD_DEFS_H.setType("HEADER")

GFX_SSD1306_COMMON_H = comp.createFileSymbol("GFX_SSD1306_COMMON_H", None)
GFX_SSD1306_COMMON_H.setDestPath("gfx/driver/controller/ssd1306/")
GFX_SSD1306_COMMON_H.setSourcePath("inc/drv_gfx_ssd1306_common.h")
GFX_SSD1306_COMMON_H.setOutputName("drv_gfx_ssd1306_common.h")
GFX_SSD1306_COMMON_H.setProjectPath(projectPath)
GFX_SSD1306_COMMON_H.setType("HEADER")