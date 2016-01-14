
Pod::Spec.new do |s|
s.name             = "GGG"
s.version          = "0.1.0"
s.summary          = "插件测试GGGA sh插件测试ort description of GGG."

s.homepage         = "https://github.com"

s.description      = "插件测试描述插件测试描述插件测试描述插件测试描述插件测试描述插件测试描述插件测试描述插件测试描述插件测试描述插件测试描述"

s.license          = 'MIT'
s.author           = { "xiangfp" => "457813584@qq.com" }
s.source           = { :git => "https://github.com/xiangfp/GGG.git", :tag => s.version.to_s }


s.platform     = :ios, '7.0'
s.requires_arc = true

s.source_files = 'Pod/Classes/**/*'
s.resource_bundles = {
'GGG' => ['Pod/Assets/*.png']
}

s.vendored_libraries = 'Example/libTiny.a'
# s.public_header_files = 'Pod/Classes/**/*.h'
# s.frameworks = 'UIKit', 'MapKit'
# s.dependency 'AFNetworking', '~> 2.3'
end



