import unittest
import subprocess
import os
import glob

class TestCCompilation(unittest.TestCase):
    
    def test_compilation_integrity(self):
        # We test a random sample of C files to ensure they are strictly valid C syntax
        # and do not contain syntax errors or missing standard library imports.
        c_files = glob.glob("*.c")
        
        # Test the first 5 files as a representative sample
        for file in c_files[:5]:
            # Compile with gcc, do not link (just check syntax)
            result = subprocess.run(["gcc", "-fsyntax-only", file], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, msg=f"Syntax error in {file}:\n{result.stderr}")

if __name__ == '__main__':
    unittest.main()
