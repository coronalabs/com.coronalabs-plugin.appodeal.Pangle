local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = { 'APDPangleAdapter',  'bz2', 'iconv', 'resolv', 'c++', 'c++abi', 'xml2', 'z', 'sqlite3' },
		frameworks = { 'PAGAdSDK', },
		frameworksOptional = {},
	},
}

return metadata
