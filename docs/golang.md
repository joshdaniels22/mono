# Golang Cheat Sheet

## Printing Values
Print all struct details: struct name, field names, and values: 
```
fmt.Printf("value: %#v\n", val)
```

## Running Unit Tests with Build Tags
File Tag: `//go:build unit_test`

Command: `ginkgo -tags=unit_test`

## Linting
```
golangci-lint run
```

## Formatting Files
Standard 'gofmt': `gofmt -s -w .`

Stricter 'gofumpt': `gofumpt -l -w .`

GCI format: `gci write .`
