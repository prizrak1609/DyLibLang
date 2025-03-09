// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDyLibLang",
    products: [
        .library(name: "TreeSitterDyLibLang", targets: ["TreeSitterDyLibLang"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDyLibLang",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDyLibLangTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDyLibLang",
            ],
            path: "bindings/swift/TreeSitterDyLibLangTests"
        )
    ],
    cLanguageStandard: .c11
)
