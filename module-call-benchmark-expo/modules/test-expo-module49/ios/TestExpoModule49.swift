import ExpoModulesCore

public class TestExpoModule49: Module {
  public func definition() -> ModuleDefinition {
    Name("TestExpoModule49")

    AsyncFunction("queryTtiDurationAsync") { () -> Int64 in
      guard let performanceLogger = self.appContext?.reactBridge?.performanceLogger else {
        throw Exceptions.RuntimeLost()
      }
      return performanceLogger.duration(for: .RCTPLTTI)
    }
  }
}
