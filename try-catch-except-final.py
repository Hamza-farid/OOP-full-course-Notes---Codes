# python
def safe_divide(a, b):
    try:
        # code that may raise
        result = a / b
    except ZeroDivisionError:
        # handles division-by-zero
        print("Error: cannot divide by zero.")
        return None
    except Exception as e:
        # handles any other unexpected error
        print("Unexpected error:", e)
        return None
    else:
        # runs only if no exception occurred
        print("Division succeeded, result =", result)
        return result
    finally:
        # always runs (cleanup, logging, etc.)
        print("Completed attempt to divide", a, "by", b)
        # note: returning from finally overrides previous return if present

# Examples:
print("Case 1 (no error):")
safe_divide(10, 2)

print("\nCase 2 (zero division):")
safe_divide(10, 0)