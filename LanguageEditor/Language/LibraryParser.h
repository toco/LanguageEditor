#import <ParseKit/PEGParser.h>

enum {
    LIBRARYPARSER_TOKEN_KIND_COMMA = 14,
    LIBRARYPARSER_TOKEN_KIND_TITLETOKEN,
    LIBRARYPARSER_TOKEN_KIND_ISBNTOKEN,
    LIBRARYPARSER_TOKEN_KIND_BOOKTOKEN,
    LIBRARYPARSER_TOKEN_KIND_AUTHORSTOKEN,
    LIBRARYPARSER_TOKEN_KIND_CHAPTERTOKEN,
};

@interface LibraryParser : PEGParser

@end

