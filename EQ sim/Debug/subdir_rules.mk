################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
EZDSP5535_SAR_sim.obj: ../EZDSP5535_SAR_sim.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/c55xx_csl/inc" --define=c5535 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="EZDSP5535_SAR_sim.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

aic3204.obj: ../aic3204.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/c55xx_csl/inc" --define=c5535 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="aic3204.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

aic3204_init.obj: ../aic3204_init.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/c55xx_csl/inc" --define=c5535 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="aic3204_init.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

ezdsp5535_aic3204_dma.obj: ../ezdsp5535_aic3204_dma.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/c55xx_csl/inc" --define=c5535 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="ezdsp5535_aic3204_dma.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

iir.obj: ../iir.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/c55xx_csl/inc" --define=c5535 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="iir.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/c55xx_csl/inc" --define=c5535 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="main.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

print_number.obj: ../print_number.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/c55xx_csl/inc" --define=c5535 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="print_number.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

processing.obj: ../processing.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/bin/cl55" -v5515 --memory_model=large -g --include_path="C:/ti/ccs620/ccsv6/tools/compiler/c5500_4.4.1/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/include" --include_path="C:/Users/xxSALExx/Desktop/OAiS DPS 2/Projekat1/EQ sim/c55xx_csl/inc" --define=c5535 --display_error_number --diag_warning=225 --ptrdiff_size=16 --preproc_with_compile --preproc_dependency="processing.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


