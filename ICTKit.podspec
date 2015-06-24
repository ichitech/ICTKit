Pod::Spec.new do |s|

  s.name         = "ICTKit"
  s.version      = "0.6.1"
  s.summary      = "UIKit & UIFoundation"
  s.description  = "UIKit & UIFoundation"
                 
  s.homepage     = "https://github.com/ngocbinh02/ICTKit"
  s.screenshots  = "https://raw.githubusercontent.com/ngocbinh02/ICTKit/master/download.jpeg"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "Harry Tran" => "ngocbinh02@gmail.com" }

  s.platform     = :ios, '6.0'

  s.source       = { :git => "https://github.com/ngocbinh02/ICTKit.git", :tag => s.version.to_s }
  s.source_files  = 'ICTKit/*'
  s.requires_arc = true

end
