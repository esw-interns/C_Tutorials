.PHONY: clean All

All:
	@echo "----------Building project:[ 8-1pointee - Debug ]----------"
	@cd "8-1pointee" && "$(MAKE)" -f  "8-1pointee.mk"
clean:
	@echo "----------Cleaning project:[ 8-1pointee - Debug ]----------"
	@cd "8-1pointee" && "$(MAKE)" -f  "8-1pointee.mk" clean
