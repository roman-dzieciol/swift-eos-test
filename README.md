# swift-eos-test

Testable version of Epic's EOSSDK framework.

See also: https://github.com/roman-dzieciol/swift-eos-build

 - Public API & ABI is identical to official release, so can be used in place of standard SDK.
 - EOSSDK implementation is replaced with calls to public function pointers, which tests can customize.
 
Provide function pointer implementations to test values that EOSSDK api receives and return custom results.
 
NOTE: The function pointers use C calling convention, which can access only provided parameters or global references.
